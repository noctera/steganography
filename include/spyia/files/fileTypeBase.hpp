#pragma once

#include <spyia/files/fileType.hpp>

#include <string>

namespace Spyia::File {
    class FileTypeBase {
      public:
        explicit FileTypeBase(FileType fileType);

        const FileType &getFileType();
        virtual const std::string& getBinaryContent() const {};
        unsigned long getContentBitsCount() const;
      protected:
        const FileType m_fileType;
        unsigned long m_contentBitsCount = 0;
    };
}
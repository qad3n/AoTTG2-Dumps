using System.IO.Compression;

namespace Utility.Algorithms
{
    internal class LZFAlgorithm : CompressionAlgorithm
    {
        public override byte[] Compress(byte[] data, CompressionLevel level = CompressionLevel.Fastest)
        {
            return CLZF2.Compress(data);
        }

        // unlike the bcl algorithms this ignores buffersize and maxsize so lzf decompression has no
        // size cap and can act as a decompression bomb since clzf2 grows its output buffer without limit
        public override byte[] Decompress(byte[] data, int bufferSize = DefaultBufferSize, long maxSize = DefaultMaxSize)
        {
            return CLZF2.Decompress(data);
        }
    }
}

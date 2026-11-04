using System.IO;
using System.Text;
using System.Text.RegularExpressions;

namespace loader
{
	// every serialized unity file names the editor that wrote it in its header, ahead of any object data
	internal static class UnityVersion
	{
		private const int kHeaderBytes = 4096;

		private static readonly Regex kPattern = new Regex(@"(\d{4,})\.(\d+)\.(\d+)[abfpx]\d+", RegexOptions.CultureInvariant);

		// null when the file has no readable version, the match index is the byte offset since the header is ascii
		internal static Match read(string path)
		{
			byte[] header = new byte[UnityVersion.kHeaderBytes];
			int read;
			using (FileStream stream = File.OpenRead(path))
				read = stream.ReadAtLeast(header, header.Length, throwOnEndOfStream: false);

			Match match = UnityVersion.kPattern.Match(Encoding.ASCII.GetString(header, 0, read));
			return match.Success ? match : null;
		}
	}
}

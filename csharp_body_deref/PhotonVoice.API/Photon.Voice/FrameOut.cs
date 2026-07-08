using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200005C")]
public class FrameOut<T>
{
	[Token(Token = "0x1700006B")]
	public T[] Buf
	{
		[Token(Token = "0x60001CB")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001CC")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700006C")]
	public bool EndOfStream
	{
		[Token(Token = "0x60001CD")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001CE")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60001C9")]
	public FrameOut(T[] buf, bool endOfStream)
	{
	}

	[Token(Token = "0x60001CA")]
	public FrameOut<T> Set(T[] buf, bool endOfStream)
	{
		return null;
	}
}

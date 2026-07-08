using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000302")]
public class ProgressChangedEventArgs : EventArgs
{
	[Token(Token = "0x4000E63")]
	[FieldOffset(Offset = "0x10")]
	private readonly int progressPercentage;

	[Token(Token = "0x4000E64")]
	[FieldOffset(Offset = "0x18")]
	private readonly object userState;

	[Token(Token = "0x1700046C")]
	[SRDescription("Percentage progress made in operation.")]
	public int ProgressPercentage
	{
		[Token(Token = "0x600137E")]
		[Address(RVA = "0x45908F0", Offset = "0x45908F0", VA = "0x45908F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700046D")]
	[SRDescription("User-supplied state to identify operation.")]
	public object UserState
	{
		[Token(Token = "0x600137F")]
		[Address(RVA = "0x4590900", Offset = "0x4590900", VA = "0x4590900")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600137D")]
	[Address(RVA = "0x4590880", Offset = "0x4590880", VA = "0x4590880")]
	public ProgressChangedEventArgs(int progressPercentage, object userState)
	{
	}
}

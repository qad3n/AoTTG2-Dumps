// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ProgressChangedEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200020D")]
public class ProgressChangedEventArgs : EventArgs
{
	[Token(Token = "0x400079A")]
	[FieldOffset(Offset = "0x10")]
	private readonly int progressPercentage;

	[Token(Token = "0x400079B")]
	[FieldOffset(Offset = "0x18")]
	private readonly object userState;

	[Token(Token = "0x170002DB")]
	[SRDescription("Percentage progress made in operation.")]
	public int ProgressPercentage
	{
		[Token(Token = "0x6000DC6")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002DC")]
	[SRDescription("User-supplied state to identify operation.")]
	public object UserState
	{
		[Token(Token = "0x6000DC7")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000DC5")]
	[Address(RVA = "0x28B60D0", Offset = "0x28B46D0", VA = "0x1828B60D0")]
	public ProgressChangedEventArgs(int progressPercentage, object userState)
	{
	}
}

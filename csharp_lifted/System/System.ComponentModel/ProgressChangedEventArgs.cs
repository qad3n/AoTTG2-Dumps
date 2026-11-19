// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ProgressChangedEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001CE")]
public class ProgressChangedEventArgs : EventArgs
{
	[Token(Token = "0x40006CB")]
	[FieldOffset(Offset = "0x10")]
	private readonly int progressPercentage;

	[Token(Token = "0x40006CC")]
	[FieldOffset(Offset = "0x18")]
	private readonly object userState;

	[Token(Token = "0x170002AC")]
	[SRDescription("Percentage progress made in operation.")]
	public int ProgressPercentage
	{
		[Token(Token = "0x6000C06")]
		[Address(RVA = "0x6254850", Offset = "0x6253850", VA = "0x6254850")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002AD")]
	[SRDescription("User-supplied state to identify operation.")]
	public object UserState
	{
		[Token(Token = "0x6000C07")]
		[Address(RVA = "0x6254860", Offset = "0x6253860", VA = "0x6254860")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C05")]
	[Address(RVA = "0x62547E0", Offset = "0x62537E0", VA = "0x62547E0")]
	public ProgressChangedEventArgs(int progressPercentage, object userState)
	{
	}
}

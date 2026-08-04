// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ProgressChangedEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x48B59F0", Offset = "0x48B59F0", VA = "0x48B59F0")]
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
		[Address(RVA = "0x48B5A00", Offset = "0x48B5A00", VA = "0x48B5A00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600137D")]
	[Address(RVA = "0x48B5980", Offset = "0x48B5980", VA = "0x48B5980")]
	public ProgressChangedEventArgs(int progressPercentage, object userState)
	{
	}
}

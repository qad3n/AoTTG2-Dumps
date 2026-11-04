// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.CollectionChangeEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200017E")]
public class CollectionChangeEventArgs : EventArgs
{
	[Token(Token = "0x170001E1")]
	public virtual CollectionChangeAction Action
	{
		[Token(Token = "0x60009B1")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(CollectionChangeAction);
		}
	}

	[Token(Token = "0x170001E2")]
	public virtual object Element
	{
		[Token(Token = "0x60009B2")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009B0")]
	[Address(RVA = "0x2893AE0", Offset = "0x28920E0", VA = "0x182893AE0")]
	public CollectionChangeEventArgs(CollectionChangeAction action, object element)
	{
	}
}

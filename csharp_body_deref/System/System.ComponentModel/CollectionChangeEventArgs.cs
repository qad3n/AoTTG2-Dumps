using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000273")]
public class CollectionChangeEventArgs : EventArgs
{
	[Token(Token = "0x17000372")]
	public virtual CollectionChangeAction Action
	{
		[Token(Token = "0x6000F69")]
		[Address(RVA = "0x45621D0", Offset = "0x45621D0", VA = "0x45621D0", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(CollectionChangeAction);
		}
	}

	[Token(Token = "0x17000373")]
	public virtual object Element
	{
		[Token(Token = "0x6000F6A")]
		[Address(RVA = "0x45621E0", Offset = "0x45621E0", VA = "0x45621E0", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F68")]
	[Address(RVA = "0x4562160", Offset = "0x4562160", VA = "0x4562160")]
	public CollectionChangeEventArgs(CollectionChangeAction action, object element)
	{
	}
}

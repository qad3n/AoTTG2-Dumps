using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200008C")]
public sealed class MergedGraphElementCollection : MergedKeyedCollection<Guid, IGraphElement>, INotifyCollectionChanged<IGraphElement>
{
	[Token(Token = "0x1400000F")]
	public event Action<IGraphElement> ItemAdded
	{
		[Token(Token = "0x60003F7")]
		[Address(RVA = "0x498F560", Offset = "0x498F560", VA = "0x498F560", Slot = "17")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60003F8")]
		[Address(RVA = "0x498F610", Offset = "0x498F610", VA = "0x498F610", Slot = "18")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000010")]
	public event Action<IGraphElement> ItemRemoved
	{
		[Token(Token = "0x60003F9")]
		[Address(RVA = "0x498F6C0", Offset = "0x498F6C0", VA = "0x498F6C0", Slot = "19")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60003FA")]
		[Address(RVA = "0x498F770", Offset = "0x498F770", VA = "0x498F770", Slot = "20")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000011")]
	public event Action CollectionChanged
	{
		[Token(Token = "0x60003FB")]
		[Address(RVA = "0x498F820", Offset = "0x498F820", VA = "0x498F820", Slot = "21")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60003FC")]
		[Address(RVA = "0x498F8B0", Offset = "0x498F8B0", VA = "0x498F8B0", Slot = "22")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60003FD")]
	public override void Include<TSubItem>(IKeyedCollection<Guid, TSubItem> collection)
	{
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x4983DA0", Offset = "0x4983DA0", VA = "0x4983DA0")]
	public MergedGraphElementCollection()
	{
	}
}

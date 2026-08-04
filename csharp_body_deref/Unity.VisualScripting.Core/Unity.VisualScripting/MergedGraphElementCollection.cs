// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.MergedGraphElementCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4CB4130", Offset = "0x4CB4130", VA = "0x4CB4130", Slot = "17")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60003F8")]
		[Address(RVA = "0x4CB41E0", Offset = "0x4CB41E0", VA = "0x4CB41E0", Slot = "18")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000010")]
	public event Action<IGraphElement> ItemRemoved
	{
		[Token(Token = "0x60003F9")]
		[Address(RVA = "0x4CB4290", Offset = "0x4CB4290", VA = "0x4CB4290", Slot = "19")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60003FA")]
		[Address(RVA = "0x4CB4340", Offset = "0x4CB4340", VA = "0x4CB4340", Slot = "20")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000011")]
	public event Action CollectionChanged
	{
		[Token(Token = "0x60003FB")]
		[Address(RVA = "0x4CB43F0", Offset = "0x4CB43F0", VA = "0x4CB43F0", Slot = "21")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60003FC")]
		[Address(RVA = "0x4CB4480", Offset = "0x4CB4480", VA = "0x4CB4480", Slot = "22")]
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
	[Address(RVA = "0x4CA8970", Offset = "0x4CA8970", VA = "0x4CA8970")]
	public MergedGraphElementCollection()
	{
	}
}

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
	[Token(Token = "0x400011B")]
	[FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	private Action<IGraphElement> m_ItemAdded;

	[Token(Token = "0x400011C")]
	[FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	private Action<IGraphElement> m_ItemRemoved;

	[Token(Token = "0x400011D")]
	[FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	private Action m_CollectionChanged;

	[Token(Token = "0x1400000F")]
	public event Action<IGraphElement> ItemAdded
	{
		[Token(Token = "0x6000401")]
		[Address(RVA = "0x2DB82B0", Offset = "0x2DB68B0", VA = "0x182DB82B0", Slot = "17")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000402")]
		[Address(RVA = "0x2DB84B0", Offset = "0x2DB6AB0", VA = "0x182DB84B0", Slot = "18")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000010")]
	public event Action<IGraphElement> ItemRemoved
	{
		[Token(Token = "0x6000403")]
		[Address(RVA = "0x2DB8360", Offset = "0x2DB6960", VA = "0x182DB8360", Slot = "19")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000404")]
		[Address(RVA = "0x2DB8560", Offset = "0x2DB6B60", VA = "0x182DB8560", Slot = "20")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000011")]
	public event Action CollectionChanged
	{
		[Token(Token = "0x6000405")]
		[Address(RVA = "0x2DB8210", Offset = "0x2DB6810", VA = "0x182DB8210", Slot = "21")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000406")]
		[Address(RVA = "0x2DB8410", Offset = "0x2DB6A10", VA = "0x182DB8410", Slot = "22")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000407")]
	public override void Include<TSubItem>(IKeyedCollection<Guid, TSubItem> collection)
	{
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x2DB81D0", Offset = "0x2DB67D0", VA = "0x182DB81D0")]
	public MergedGraphElementCollection()
	{
	}
}

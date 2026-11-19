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
		[Address(RVA = "0x67A2DE0", Offset = "0x67A1DE0", VA = "0x67A2DE0", Slot = "17")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000402")]
		[Address(RVA = "0x67A2E80", Offset = "0x67A1E80", VA = "0x67A2E80", Slot = "18")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000010")]
	public event Action<IGraphElement> ItemRemoved
	{
		[Token(Token = "0x6000403")]
		[Address(RVA = "0x67A2F20", Offset = "0x67A1F20", VA = "0x67A2F20", Slot = "19")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000404")]
		[Address(RVA = "0x67A2FC0", Offset = "0x67A1FC0", VA = "0x67A2FC0", Slot = "20")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000011")]
	public event Action CollectionChanged
	{
		[Token(Token = "0x6000405")]
		[Address(RVA = "0x67A3060", Offset = "0x67A2060", VA = "0x67A3060", Slot = "21")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000406")]
		[Address(RVA = "0x67A30F0", Offset = "0x67A20F0", VA = "0x67A30F0", Slot = "22")]
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
	[Address(RVA = "0x6797B20", Offset = "0x6796B20", VA = "0x6797B20")]
	public MergedGraphElementCollection()
	{
	}
}

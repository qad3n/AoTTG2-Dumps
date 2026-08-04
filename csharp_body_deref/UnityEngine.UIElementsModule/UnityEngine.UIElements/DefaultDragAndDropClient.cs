// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DefaultDragAndDropClient
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000145")]
internal class DefaultDragAndDropClient : DragAndDropData, IDragAndDrop
{
	[Token(Token = "0x40005BF")]
	[FieldOffset(Offset = "0x10")]
	private readonly Hashtable m_GenericData;

	[Token(Token = "0x40005C0")]
	[FieldOffset(Offset = "0x18")]
	private Label m_DraggedInfoLabel;

	[Token(Token = "0x40005C1")]
	[FieldOffset(Offset = "0x20")]
	private DragVisualMode m_VisualMode;

	[Token(Token = "0x40005C2")]
	[FieldOffset(Offset = "0x28")]
	private IEnumerable<Object> m_UnityObjectReferences;

	[Token(Token = "0x17000197")]
	public override object source
	{
		[Token(Token = "0x6000923")]
		[Address(RVA = "0x501BA20", Offset = "0x501BA20", VA = "0x501BA20", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000198")]
	public DragAndDropData data
	{
		[Token(Token = "0x600092A")]
		[Address(RVA = "0x501C450", Offset = "0x501C450", VA = "0x501C450", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000924")]
	[Address(RVA = "0x501BA70", Offset = "0x501BA70", VA = "0x501BA70", Slot = "4")]
	public override object GetGenericData(string key)
	{
		return null;
	}

	[Token(Token = "0x6000925")]
	[Address(RVA = "0x501BAD0", Offset = "0x501BAD0", VA = "0x501BAD0", Slot = "6")]
	public void StartDrag(StartDragArgs args, Vector3 pointerPosition)
	{
	}

	[Token(Token = "0x6000926")]
	[Address(RVA = "0x501C240", Offset = "0x501C240", VA = "0x501C240", Slot = "7")]
	public void UpdateDrag(Vector3 pointerPosition)
	{
	}

	[Token(Token = "0x6000927")]
	[Address(RVA = "0x501C3E0", Offset = "0x501C3E0", VA = "0x501C3E0", Slot = "8")]
	public void AcceptDrag()
	{
	}

	[Token(Token = "0x6000928")]
	[Address(RVA = "0x501C3F0", Offset = "0x501C3F0", VA = "0x501C3F0", Slot = "10")]
	public void SetVisualMode(DragVisualMode mode)
	{
	}

	[Token(Token = "0x6000929")]
	[Address(RVA = "0x501C400", Offset = "0x501C400", VA = "0x501C400", Slot = "9")]
	public void DragCleanup()
	{
	}

	[Token(Token = "0x600092B")]
	[Address(RVA = "0x501B9C0", Offset = "0x501B9C0", VA = "0x501B9C0")]
	public DefaultDragAndDropClient()
	{
	}
}

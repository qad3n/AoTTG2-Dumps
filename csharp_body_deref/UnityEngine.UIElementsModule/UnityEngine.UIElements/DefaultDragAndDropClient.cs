// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DefaultDragAndDropClient
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200018A")]
internal class DefaultDragAndDropClient : DragAndDropData, IDragAndDrop
{
	[Token(Token = "0x40006E8")]
	[FieldOffset(Offset = "0x18")]
	private readonly Hashtable m_GenericData;

	[Token(Token = "0x40006E9")]
	[FieldOffset(Offset = "0x20")]
	private Label m_DraggedInfoLabel;

	[Token(Token = "0x40006EA")]
	[FieldOffset(Offset = "0x28")]
	private DragVisualMode m_VisualMode;

	[Token(Token = "0x40006EB")]
	[FieldOffset(Offset = "0x30")]
	private IReadOnlyList<EntityId> m_EntityIds;

	[Token(Token = "0x17000214")]
	public override object source
	{
		[Token(Token = "0x6000B13")]
		[Address(RVA = "0x323FCC0", Offset = "0x323E2C0", VA = "0x18323FCC0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000215")]
	public DragAndDropData data
	{
		[Token(Token = "0x6000B1A")]
		[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B14")]
	[Address(RVA = "0x323F3D0", Offset = "0x323D9D0", VA = "0x18323F3D0", Slot = "4")]
	public override object GetGenericData(string key)
	{
		return null;
	}

	[Token(Token = "0x6000B15")]
	[Address(RVA = "0x323F440", Offset = "0x323DA40", VA = "0x18323F440", Slot = "7")]
	public void StartDrag(StartDragArgs args, Vector3 pointerPosition)
	{
	}

	[Token(Token = "0x6000B16")]
	[Address(RVA = "0x323FA70", Offset = "0x323E070", VA = "0x18323FA70", Slot = "8")]
	public void UpdateDrag(Vector3 pointerPosition)
	{
	}

	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	public void AcceptDrag()
	{
	}

	[Token(Token = "0x6000B18")]
	[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090", Slot = "11")]
	public void SetVisualMode(DragVisualMode mode)
	{
	}

	[Token(Token = "0x6000B19")]
	[Address(RVA = "0x323F360", Offset = "0x323D960", VA = "0x18323F360", Slot = "10")]
	public void DragCleanup()
	{
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x323FC50", Offset = "0x323E250", VA = "0x18323FC50")]
	public DefaultDragAndDropClient()
	{
	}
}

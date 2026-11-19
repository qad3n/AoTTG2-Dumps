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
		[Address(RVA = "0x6C4F400", Offset = "0x6C4E400", VA = "0x6C4F400", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000215")]
	public DragAndDropData data
	{
		[Token(Token = "0x6000B1A")]
		[Address(RVA = "0x6C4FDF0", Offset = "0x6C4EDF0", VA = "0x6C4FDF0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B14")]
	[Address(RVA = "0x6C4F450", Offset = "0x6C4E450", VA = "0x6C4F450", Slot = "4")]
	public override object GetGenericData(string key)
	{
		return null;
	}

	[Token(Token = "0x6000B15")]
	[Address(RVA = "0x6C4F4B0", Offset = "0x6C4E4B0", VA = "0x6C4F4B0", Slot = "7")]
	public void StartDrag(StartDragArgs args, Vector3 pointerPosition)
	{
	}

	[Token(Token = "0x6000B16")]
	[Address(RVA = "0x6C4FBD0", Offset = "0x6C4EBD0", VA = "0x6C4FBD0", Slot = "8")]
	public void UpdateDrag(Vector3 pointerPosition)
	{
	}

	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x6C4FD70", Offset = "0x6C4ED70", VA = "0x6C4FD70", Slot = "9")]
	public void AcceptDrag()
	{
	}

	[Token(Token = "0x6000B18")]
	[Address(RVA = "0x6C4FD80", Offset = "0x6C4ED80", VA = "0x6C4FD80", Slot = "11")]
	public void SetVisualMode(DragVisualMode mode)
	{
	}

	[Token(Token = "0x6000B19")]
	[Address(RVA = "0x6C4FD90", Offset = "0x6C4ED90", VA = "0x6C4FD90", Slot = "10")]
	public void DragCleanup()
	{
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x6C4F3A0", Offset = "0x6C4E3A0", VA = "0x6C4F3A0")]
	public DefaultDragAndDropClient()
	{
	}
}

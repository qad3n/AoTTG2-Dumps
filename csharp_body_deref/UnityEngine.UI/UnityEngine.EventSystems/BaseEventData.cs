// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EventSystems.BaseEventData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.EventSystems;

[Token(Token = "0x2000098")]
public class BaseEventData : AbstractEventData
{
	[Token(Token = "0x40002AC")]
	[FieldOffset(Offset = "0x18")]
	private readonly EventSystem m_EventSystem;

	[Token(Token = "0x1700018F")]
	public BaseInputModule currentInputModule
	{
		[Token(Token = "0x60005F1")]
		[Address(RVA = "0x50F4F70", Offset = "0x50F4F70", VA = "0x50F4F70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000190")]
	public GameObject selectedObject
	{
		[Token(Token = "0x60005F2")]
		[Address(RVA = "0x50F4F90", Offset = "0x50F4F90", VA = "0x50F4F90")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005F3")]
		[Address(RVA = "0x50F4FB0", Offset = "0x50F4FB0", VA = "0x50F4FB0")]
		set
		{
		}
	}

	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x50F4F00", Offset = "0x50F4F00", VA = "0x50F4F00")]
	public BaseEventData(EventSystem eventSystem)
	{
	}
}

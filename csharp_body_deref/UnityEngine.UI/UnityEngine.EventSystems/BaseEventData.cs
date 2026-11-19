// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EventSystems.BaseEventData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.EventSystems;

[Token(Token = "0x200009A")]
public class BaseEventData : AbstractEventData
{
	[Token(Token = "0x40002CF")]
	[FieldOffset(Offset = "0x18")]
	private readonly EventSystem m_EventSystem;

	[Token(Token = "0x1700019F")]
	public BaseInputModule currentInputModule
	{
		[Token(Token = "0x6000638")]
		[Address(RVA = "0x6D052B0", Offset = "0x6D042B0", VA = "0x6D052B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A0")]
	public GameObject selectedObject
	{
		[Token(Token = "0x6000639")]
		[Address(RVA = "0x6D07A40", Offset = "0x6D06A40", VA = "0x6D07A40")]
		get
		{
			return null;
		}
		[Token(Token = "0x600063A")]
		[Address(RVA = "0x6D07A60", Offset = "0x6D06A60", VA = "0x6D07A60")]
		set
		{
		}
	}

	[Token(Token = "0x6000637")]
	[Address(RVA = "0x6D079D0", Offset = "0x6D069D0", VA = "0x6D079D0")]
	public BaseEventData(EventSystem eventSystem)
	{
	}
}

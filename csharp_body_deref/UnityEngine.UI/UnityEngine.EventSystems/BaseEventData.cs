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
		[Address(RVA = "0x4DCD620", Offset = "0x4DCD620", VA = "0x4DCD620")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000190")]
	public GameObject selectedObject
	{
		[Token(Token = "0x60005F2")]
		[Address(RVA = "0x4DCD640", Offset = "0x4DCD640", VA = "0x4DCD640")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005F3")]
		[Address(RVA = "0x4DCD660", Offset = "0x4DCD660", VA = "0x4DCD660")]
		set
		{
		}
	}

	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x4DCD5B0", Offset = "0x4DCD5B0", VA = "0x4DCD5B0")]
	public BaseEventData(EventSystem eventSystem)
	{
	}
}

using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.EventSystems;

[Token(Token = "0x2000096")]
public class AxisEventData : BaseEventData
{
	[Token(Token = "0x1700018C")]
	public Vector2 moveVector
	{
		[Token(Token = "0x60005E7")]
		[Address(RVA = "0x4DCD500", Offset = "0x4DCD500", VA = "0x4DCD500")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60005E8")]
		[Address(RVA = "0x4DCD510", Offset = "0x4DCD510", VA = "0x4DCD510")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700018D")]
	public MoveDirection moveDir
	{
		[Token(Token = "0x60005E9")]
		[Address(RVA = "0x4DCD520", Offset = "0x4DCD520", VA = "0x4DCD520")]
		[CompilerGenerated]
		get
		{
			return default(MoveDirection);
		}
		[Token(Token = "0x60005EA")]
		[Address(RVA = "0x4DCD530", Offset = "0x4DCD530", VA = "0x4DCD530")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x4DCD540", Offset = "0x4DCD540", VA = "0x4DCD540")]
	public AxisEventData(EventSystem eventSystem)
	{
	}
}

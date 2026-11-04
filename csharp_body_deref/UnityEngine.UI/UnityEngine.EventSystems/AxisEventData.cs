// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EventSystems.AxisEventData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.EventSystems;

[Token(Token = "0x2000098")]
public class AxisEventData : BaseEventData
{
	[Token(Token = "0x1700019C")]
	public Vector2 moveVector
	{
		[Token(Token = "0x600062E")]
		[Address(RVA = "0x32F0910", Offset = "0x32EEF10", VA = "0x1832F0910")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600062F")]
		[Address(RVA = "0x1112310", Offset = "0x1110910", VA = "0x181112310")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700019D")]
	public MoveDirection moveDir
	{
		[Token(Token = "0x6000630")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		[CompilerGenerated]
		get
		{
			return default(MoveDirection);
		}
		[Token(Token = "0x6000631")]
		[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x32F0890", Offset = "0x32EEE90", VA = "0x1832F0890")]
	public AxisEventData(EventSystem eventSystem)
	{
	}
}

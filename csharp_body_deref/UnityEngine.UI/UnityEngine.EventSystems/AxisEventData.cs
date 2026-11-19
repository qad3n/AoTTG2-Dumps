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
		[Address(RVA = "0x6D07920", Offset = "0x6D06920", VA = "0x6D07920")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600062F")]
		[Address(RVA = "0x6D07930", Offset = "0x6D06930", VA = "0x6D07930")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700019D")]
	public MoveDirection moveDir
	{
		[Token(Token = "0x6000630")]
		[Address(RVA = "0x6D07940", Offset = "0x6D06940", VA = "0x6D07940")]
		[CompilerGenerated]
		get
		{
			return default(MoveDirection);
		}
		[Token(Token = "0x6000631")]
		[Address(RVA = "0x6D07950", Offset = "0x6D06950", VA = "0x6D07950")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x6D07960", Offset = "0x6D06960", VA = "0x6D07960")]
	public AxisEventData(EventSystem eventSystem)
	{
	}
}

// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.InputForUI.NavigationEventRepeatHelper
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.IntegerTime;

namespace UnityEngine.InputForUI;

[Token(Token = "0x200002B")]
internal class NavigationEventRepeatHelper
{
	[Token(Token = "0x40000D4")]
	[FieldOffset(Offset = "0x10")]
	private int m_ConsecutiveMoveCount;

	[Token(Token = "0x40000D5")]
	[FieldOffset(Offset = "0x14")]
	private NavigationEvent.Direction m_LastDirection;

	[Token(Token = "0x40000D6")]
	[FieldOffset(Offset = "0x18")]
	private DiscreteTime m_PrevActionTime;

	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0x20")]
	private readonly DiscreteTime m_InitialRepeatDelay;

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x28")]
	private readonly DiscreteTime m_ConsecutiveRepeatDelay;

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x2FC1690", Offset = "0x2FBFC90", VA = "0x182FC1690")]
	public void Reset()
	{
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x2FC16F0", Offset = "0x2FBFCF0", VA = "0x182FC16F0")]
	public bool ShouldSendMoveEvent(DiscreteTime timestamp, NavigationEvent.Direction direction, bool axisButtonsWherePressedThisFrame)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x2FC17E0", Offset = "0x2FBFDE0", VA = "0x182FC17E0")]
	public NavigationEventRepeatHelper()
	{
	}
}

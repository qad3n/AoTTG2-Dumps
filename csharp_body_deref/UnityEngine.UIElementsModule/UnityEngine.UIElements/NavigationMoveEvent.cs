// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.NavigationMoveEvent
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200020B")]
public class NavigationMoveEvent : NavigationEventBase<NavigationMoveEvent>
{
	[Token(Token = "0x200020C")]
	public enum Direction
	{
		[Token(Token = "0x40007F9")]
		None,
		[Token(Token = "0x40007FA")]
		Left,
		[Token(Token = "0x40007FB")]
		Up,
		[Token(Token = "0x40007FC")]
		Right,
		[Token(Token = "0x40007FD")]
		Down,
		[Token(Token = "0x40007FE")]
		Next,
		[Token(Token = "0x40007FF")]
		Previous
	}

	[Token(Token = "0x1700029B")]
	public Direction direction
	{
		[Token(Token = "0x6000DDF")]
		[Address(RVA = "0x58A560", Offset = "0x588B60", VA = "0x18058A560")]
		[CompilerGenerated]
		get
		{
			return default(Direction);
		}
		[Token(Token = "0x6000DE0")]
		[Address(RVA = "0x58A8F0", Offset = "0x588EF0", VA = "0x18058A8F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700029C")]
	private Vector2 move
	{
		[Token(Token = "0x6000DE1")]
		[Address(RVA = "0xA4D6D0", Offset = "0xA4BCD0", VA = "0x180A4D6D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000DDD")]
	[Address(RVA = "0x3269780", Offset = "0x3267D80", VA = "0x183269780")]
	static NavigationMoveEvent()
	{
	}

	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x32692F0", Offset = "0x32678F0", VA = "0x1832692F0")]
	internal static Direction DetermineMoveDirection(float x, float y, float deadZone = 0.6f)
	{
		return default(Direction);
	}

	[Token(Token = "0x6000DE2")]
	[Address(RVA = "0x32694D0", Offset = "0x3267AD0", VA = "0x1832694D0")]
	internal static NavigationMoveEvent GetPooled(Vector2 moveVector, NavigationDeviceType deviceType, EventModifiers modifiers = EventModifiers.None)
	{
		return null;
	}

	[Token(Token = "0x6000DE3")]
	[Address(RVA = "0x3269380", Offset = "0x3267980", VA = "0x183269380")]
	public static NavigationMoveEvent GetPooled(Direction direction, EventModifiers modifiers = EventModifiers.None)
	{
		return null;
	}

	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x3269420", Offset = "0x3267A20", VA = "0x183269420")]
	internal static NavigationMoveEvent GetPooled(Direction direction, NavigationDeviceType deviceType, EventModifiers modifiers = EventModifiers.None)
	{
		return null;
	}

	[Token(Token = "0x6000DE5")]
	[Address(RVA = "0x32695E0", Offset = "0x3267BE0", VA = "0x1832695E0", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x3269860", Offset = "0x3267E60", VA = "0x183269860")]
	public NavigationMoveEvent()
	{
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x3269660", Offset = "0x3267C60", VA = "0x183269660")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x32696C0", Offset = "0x3267CC0", VA = "0x1832696C0", Slot = "9")]
	protected internal override void PostDispatch(IPanel panel)
	{
	}
}

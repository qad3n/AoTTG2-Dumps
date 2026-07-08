using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001D5")]
public interface IPointerEvent
{
	[Token(Token = "0x17000222")]
	int pointerId
	{
		[Token(Token = "0x6000C00")]
		get;
	}

	[Token(Token = "0x17000223")]
	string pointerType
	{
		[Token(Token = "0x6000C01")]
		get;
	}

	[Token(Token = "0x17000224")]
	bool isPrimary
	{
		[Token(Token = "0x6000C02")]
		get;
	}

	[Token(Token = "0x17000225")]
	int button
	{
		[Token(Token = "0x6000C03")]
		get;
	}

	[Token(Token = "0x17000226")]
	int pressedButtons
	{
		[Token(Token = "0x6000C04")]
		get;
	}

	[Token(Token = "0x17000227")]
	Vector3 position
	{
		[Token(Token = "0x6000C05")]
		get;
	}

	[Token(Token = "0x17000228")]
	Vector3 localPosition
	{
		[Token(Token = "0x6000C06")]
		get;
	}

	[Token(Token = "0x17000229")]
	Vector3 deltaPosition
	{
		[Token(Token = "0x6000C07")]
		get;
	}

	[Token(Token = "0x1700022A")]
	float deltaTime
	{
		[Token(Token = "0x6000C08")]
		get;
	}

	[Token(Token = "0x1700022B")]
	int clickCount
	{
		[Token(Token = "0x6000C09")]
		get;
	}

	[Token(Token = "0x1700022C")]
	float pressure
	{
		[Token(Token = "0x6000C0A")]
		get;
	}

	[Token(Token = "0x1700022D")]
	float tangentialPressure
	{
		[Token(Token = "0x6000C0B")]
		get;
	}

	[Token(Token = "0x1700022E")]
	float altitudeAngle
	{
		[Token(Token = "0x6000C0C")]
		get;
	}

	[Token(Token = "0x1700022F")]
	float azimuthAngle
	{
		[Token(Token = "0x6000C0D")]
		get;
	}

	[Token(Token = "0x17000230")]
	float twist
	{
		[Token(Token = "0x6000C0E")]
		get;
	}

	[Token(Token = "0x17000231")]
	Vector2 tilt
	{
		[Token(Token = "0x6000C0F")]
		get;
	}

	[Token(Token = "0x17000232")]
	PenStatus penStatus
	{
		[Token(Token = "0x6000C10")]
		get;
	}

	[Token(Token = "0x17000233")]
	Vector2 radius
	{
		[Token(Token = "0x6000C11")]
		get;
	}

	[Token(Token = "0x17000234")]
	Vector2 radiusVariance
	{
		[Token(Token = "0x6000C12")]
		get;
	}

	[Token(Token = "0x17000235")]
	EventModifiers modifiers
	{
		[Token(Token = "0x6000C13")]
		get;
	}

	[Token(Token = "0x17000236")]
	bool shiftKey
	{
		[Token(Token = "0x6000C14")]
		get;
	}

	[Token(Token = "0x17000237")]
	bool ctrlKey
	{
		[Token(Token = "0x6000C15")]
		get;
	}

	[Token(Token = "0x17000238")]
	bool commandKey
	{
		[Token(Token = "0x6000C16")]
		get;
	}

	[Token(Token = "0x17000239")]
	bool altKey
	{
		[Token(Token = "0x6000C17")]
		get;
	}

	[Token(Token = "0x1700023A")]
	bool actionKey
	{
		[Token(Token = "0x6000C18")]
		get;
	}
}

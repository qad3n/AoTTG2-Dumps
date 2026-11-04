// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IPointerEvent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000220")]
public interface IPointerEvent
{
	[Token(Token = "0x170002A3")]
	int pointerId
	{
		[Token(Token = "0x6000E2F")]
		get;
	}

	[Token(Token = "0x170002A4")]
	string pointerType
	{
		[Token(Token = "0x6000E30")]
		get;
	}

	[Token(Token = "0x170002A5")]
	bool isPrimary
	{
		[Token(Token = "0x6000E31")]
		get;
	}

	[Token(Token = "0x170002A6")]
	int button
	{
		[Token(Token = "0x6000E32")]
		get;
	}

	[Token(Token = "0x170002A7")]
	int pressedButtons
	{
		[Token(Token = "0x6000E33")]
		get;
	}

	[Token(Token = "0x170002A8")]
	Vector3 position
	{
		[Token(Token = "0x6000E34")]
		get;
	}

	[Token(Token = "0x170002A9")]
	Vector3 localPosition
	{
		[Token(Token = "0x6000E35")]
		get;
	}

	[Token(Token = "0x170002AA")]
	Vector3 deltaPosition
	{
		[Token(Token = "0x6000E36")]
		get;
	}

	[Token(Token = "0x170002AB")]
	float deltaTime
	{
		[Token(Token = "0x6000E37")]
		get;
	}

	[Token(Token = "0x170002AC")]
	int clickCount
	{
		[Token(Token = "0x6000E38")]
		get;
	}

	[Token(Token = "0x170002AD")]
	float pressure
	{
		[Token(Token = "0x6000E39")]
		get;
	}

	[Token(Token = "0x170002AE")]
	float tangentialPressure
	{
		[Token(Token = "0x6000E3A")]
		get;
	}

	[Token(Token = "0x170002AF")]
	float altitudeAngle
	{
		[Token(Token = "0x6000E3B")]
		get;
	}

	[Token(Token = "0x170002B0")]
	float azimuthAngle
	{
		[Token(Token = "0x6000E3C")]
		get;
	}

	[Token(Token = "0x170002B1")]
	float twist
	{
		[Token(Token = "0x6000E3D")]
		get;
	}

	[Token(Token = "0x170002B2")]
	Vector2 tilt
	{
		[Token(Token = "0x6000E3E")]
		get;
	}

	[Token(Token = "0x170002B3")]
	PenStatus penStatus
	{
		[Token(Token = "0x6000E3F")]
		get;
	}

	[Token(Token = "0x170002B4")]
	Vector2 radius
	{
		[Token(Token = "0x6000E40")]
		get;
	}

	[Token(Token = "0x170002B5")]
	Vector2 radiusVariance
	{
		[Token(Token = "0x6000E41")]
		get;
	}

	[Token(Token = "0x170002B6")]
	EventModifiers modifiers
	{
		[Token(Token = "0x6000E42")]
		get;
	}

	[Token(Token = "0x170002B7")]
	bool shiftKey
	{
		[Token(Token = "0x6000E43")]
		get;
	}

	[Token(Token = "0x170002B8")]
	bool ctrlKey
	{
		[Token(Token = "0x6000E44")]
		get;
	}

	[Token(Token = "0x170002B9")]
	bool commandKey
	{
		[Token(Token = "0x6000E45")]
		get;
	}

	[Token(Token = "0x170002BA")]
	bool altKey
	{
		[Token(Token = "0x6000E46")]
		get;
	}

	[Token(Token = "0x170002BB")]
	bool actionKey
	{
		[Token(Token = "0x6000E47")]
		get;
	}
}

// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Touch
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000005")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/InputBindings.h")]
public struct Touch
{
	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x0")]
	private int m_FingerId;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x4")]
	private Vector2 m_Position;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0xC")]
	private Vector2 m_RawPosition;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x14")]
	private Vector2 m_PositionDelta;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x1C")]
	private float m_TimeDelta;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x20")]
	private int m_TapCount;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x24")]
	private TouchPhase m_Phase;

	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x28")]
	private TouchType m_Type;

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x2C")]
	private float m_Pressure;

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x30")]
	private float m_maximumPossiblePressure;

	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x34")]
	private float m_Radius;

	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x38")]
	private float m_RadiusVariance;

	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x3C")]
	private float m_AltitudeAngle;

	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x40")]
	private float m_AzimuthAngle;

	[Token(Token = "0x17000001")]
	public int fingerId
	{
		[Token(Token = "0x6000001")]
		[Address(RVA = "0x4E6ED60", Offset = "0x4E6ED60", VA = "0x4E6ED60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000002")]
	public Vector2 position
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x4E6ED70", Offset = "0x4E6ED70", VA = "0x4E6ED70")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x4E6ED80", Offset = "0x4E6ED80", VA = "0x4E6ED80")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public Vector2 rawPosition
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x4E6ED90", Offset = "0x4E6ED90", VA = "0x4E6ED90")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x4E6EDA0", Offset = "0x4E6EDA0", VA = "0x4E6EDA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public Vector2 deltaPosition
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x4E6EDB0", Offset = "0x4E6EDB0", VA = "0x4E6EDB0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x4E6EDC0", Offset = "0x4E6EDC0", VA = "0x4E6EDC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public float deltaTime
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x4E6EDD0", Offset = "0x4E6EDD0", VA = "0x4E6EDD0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000006")]
	public int tapCount
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x4E6EDE0", Offset = "0x4E6EDE0", VA = "0x4E6EDE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000007")]
	public TouchPhase phase
	{
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x4E6EDF0", Offset = "0x4E6EDF0", VA = "0x4E6EDF0")]
		get
		{
			return default(TouchPhase);
		}
	}

	[Token(Token = "0x17000008")]
	public float pressure
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x4E6EE00", Offset = "0x4E6EE00", VA = "0x4E6EE00")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000009")]
	public float maximumPossiblePressure
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x4E6EE10", Offset = "0x4E6EE10", VA = "0x4E6EE10")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000A")]
	public TouchType type
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x4E6EE20", Offset = "0x4E6EE20", VA = "0x4E6EE20")]
		get
		{
			return default(TouchType);
		}
	}

	[Token(Token = "0x1700000B")]
	public float altitudeAngle
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x4E6EE30", Offset = "0x4E6EE30", VA = "0x4E6EE30")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000C")]
	public float azimuthAngle
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x4E6EE40", Offset = "0x4E6EE40", VA = "0x4E6EE40")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000D")]
	public float radius
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x4E6EE50", Offset = "0x4E6EE50", VA = "0x4E6EE50")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000E")]
	public float radiusVariance
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x4E6EE60", Offset = "0x4E6EE60", VA = "0x4E6EE60")]
		get
		{
			return default(float);
		}
	}
}

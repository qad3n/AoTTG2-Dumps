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
		[Address(RVA = "0xD18930", Offset = "0xD16F30", VA = "0x180D18930")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000002")]
	public Vector2 position
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x2FC65B0", Offset = "0x2FC4BB0", VA = "0x182FC65B0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x1B943B0", Offset = "0x1B929B0", VA = "0x181B943B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public Vector2 rawPosition
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x2FC65F0", Offset = "0x2FC4BF0", VA = "0x182FC65F0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x2FC6610", Offset = "0x2FC4C10", VA = "0x182FC6610")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public Vector2 deltaPosition
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x155C710", Offset = "0x155AD10", VA = "0x18155C710")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x2FC3080", Offset = "0x2FC1680", VA = "0x182FC3080")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public float deltaTime
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x2E8CC00", Offset = "0x2E8B200", VA = "0x182E8CC00")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000006")]
	public int tapCount
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0xE28270", Offset = "0xE26870", VA = "0x180E28270")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000007")]
	public TouchPhase phase
	{
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x1CC78C0", Offset = "0x1CC5EC0", VA = "0x181CC78C0")]
		get
		{
			return default(TouchPhase);
		}
	}

	[Token(Token = "0x17000008")]
	public float pressure
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0xD0EAF0", Offset = "0xD0D0F0", VA = "0x180D0EAF0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000009")]
	public float maximumPossiblePressure
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x2E8CBF0", Offset = "0x2E8B1F0", VA = "0x182E8CBF0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000A")]
	public TouchType type
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0xE282E0", Offset = "0xE268E0", VA = "0x180E282E0")]
		get
		{
			return default(TouchType);
		}
	}

	[Token(Token = "0x1700000B")]
	public float altitudeAngle
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x2FC6590", Offset = "0x2FC4B90", VA = "0x182FC6590")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000C")]
	public float azimuthAngle
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x2FC65A0", Offset = "0x2FC4BA0", VA = "0x182FC65A0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000D")]
	public float radius
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x2FC65E0", Offset = "0x2FC4BE0", VA = "0x182FC65E0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000E")]
	public float radiusVariance
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x2FC65D0", Offset = "0x2FC4BD0", VA = "0x182FC65D0")]
		get
		{
			return default(float);
		}
	}
}

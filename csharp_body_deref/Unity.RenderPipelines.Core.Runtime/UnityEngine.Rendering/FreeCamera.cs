using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000062")]
public class FreeCamera : MonoBehaviour
{
	[Token(Token = "0x4000193")]
	private const float k_MouseSensitivityMultiplier = 0.01f;

	[Token(Token = "0x4000194")]
	[FieldOffset(Offset = "0x20")]
	public float m_LookSpeedController;

	[Token(Token = "0x4000195")]
	[FieldOffset(Offset = "0x24")]
	public float m_LookSpeedMouse;

	[Token(Token = "0x4000196")]
	[FieldOffset(Offset = "0x28")]
	public float m_MoveSpeed;

	[Token(Token = "0x4000197")]
	[FieldOffset(Offset = "0x2C")]
	public float m_MoveSpeedIncrement;

	[Token(Token = "0x4000198")]
	[FieldOffset(Offset = "0x30")]
	public float m_Turbo;

	[Token(Token = "0x4000199")]
	[FieldOffset(Offset = "0x0")]
	private static string kMouseX;

	[Token(Token = "0x400019A")]
	[FieldOffset(Offset = "0x8")]
	private static string kMouseY;

	[Token(Token = "0x400019B")]
	[FieldOffset(Offset = "0x10")]
	private static string kRightStickX;

	[Token(Token = "0x400019C")]
	[FieldOffset(Offset = "0x18")]
	private static string kRightStickY;

	[Token(Token = "0x400019D")]
	[FieldOffset(Offset = "0x20")]
	private static string kVertical;

	[Token(Token = "0x400019E")]
	[FieldOffset(Offset = "0x28")]
	private static string kHorizontal;

	[Token(Token = "0x400019F")]
	[FieldOffset(Offset = "0x30")]
	private static string kYAxis;

	[Token(Token = "0x40001A0")]
	[FieldOffset(Offset = "0x38")]
	private static string kSpeedAxis;

	[Token(Token = "0x40001A1")]
	[FieldOffset(Offset = "0x34")]
	private float inputRotateAxisX;

	[Token(Token = "0x40001A2")]
	[FieldOffset(Offset = "0x38")]
	private float inputRotateAxisY;

	[Token(Token = "0x40001A3")]
	[FieldOffset(Offset = "0x3C")]
	private float inputChangeSpeed;

	[Token(Token = "0x40001A4")]
	[FieldOffset(Offset = "0x40")]
	private float inputVertical;

	[Token(Token = "0x40001A5")]
	[FieldOffset(Offset = "0x44")]
	private float inputHorizontal;

	[Token(Token = "0x40001A6")]
	[FieldOffset(Offset = "0x48")]
	private float inputYAxis;

	[Token(Token = "0x40001A7")]
	[FieldOffset(Offset = "0x4C")]
	private bool leftShiftBoost;

	[Token(Token = "0x40001A8")]
	[FieldOffset(Offset = "0x4D")]
	private bool leftShift;

	[Token(Token = "0x40001A9")]
	[FieldOffset(Offset = "0x4E")]
	private bool fire1;

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x48703E0", Offset = "0x48703E0", VA = "0x48703E0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x48703F0", Offset = "0x48703F0", VA = "0x48703F0")]
	private void RegisterInputs()
	{
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x4870400", Offset = "0x4870400", VA = "0x4870400")]
	private void UpdateInputs()
	{
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x48705D0", Offset = "0x48705D0", VA = "0x48705D0")]
	private void Update()
	{
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x4870B30", Offset = "0x4870B30", VA = "0x4870B30")]
	public FreeCamera()
	{
	}
}

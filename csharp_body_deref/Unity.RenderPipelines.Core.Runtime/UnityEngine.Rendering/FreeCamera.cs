// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.FreeCamera
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200001C")]
public class FreeCamera : MonoBehaviour
{
	[Token(Token = "0x4000091")]
	private const float k_MouseSensitivityMultiplier = 0.01f;

	[Token(Token = "0x4000092")]
	[FieldOffset(Offset = "0x20")]
	public float m_LookSpeedController;

	[Token(Token = "0x4000093")]
	[FieldOffset(Offset = "0x24")]
	public float m_LookSpeedMouse;

	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0x28")]
	public float m_MoveSpeed;

	[Token(Token = "0x4000095")]
	[FieldOffset(Offset = "0x2C")]
	public float m_MoveSpeedIncrement;

	[Token(Token = "0x4000096")]
	[FieldOffset(Offset = "0x30")]
	public float m_Turbo;

	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0x0")]
	private static string kMouseX;

	[Token(Token = "0x4000098")]
	[FieldOffset(Offset = "0x8")]
	private static string kMouseY;

	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0x10")]
	private static string kRightStickX;

	[Token(Token = "0x400009A")]
	[FieldOffset(Offset = "0x18")]
	private static string kRightStickY;

	[Token(Token = "0x400009B")]
	[FieldOffset(Offset = "0x20")]
	private static string kVertical;

	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0x28")]
	private static string kHorizontal;

	[Token(Token = "0x400009D")]
	[FieldOffset(Offset = "0x30")]
	private static string kYAxis;

	[Token(Token = "0x400009E")]
	[FieldOffset(Offset = "0x38")]
	private static string kSpeedAxis;

	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x34")]
	private float inputRotateAxisX;

	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x38")]
	private float inputRotateAxisY;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x3C")]
	private float inputChangeSpeed;

	[Token(Token = "0x40000A2")]
	[FieldOffset(Offset = "0x40")]
	private float inputVertical;

	[Token(Token = "0x40000A3")]
	[FieldOffset(Offset = "0x44")]
	private float inputHorizontal;

	[Token(Token = "0x40000A4")]
	[FieldOffset(Offset = "0x48")]
	private float inputYAxis;

	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x4C")]
	private bool leftShiftBoost;

	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x4D")]
	private bool leftShift;

	[Token(Token = "0x40000A7")]
	[FieldOffset(Offset = "0x4E")]
	private bool fire1;

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void RegisterInputs()
	{
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x2AC1320", Offset = "0x2ABF920", VA = "0x182AC1320")]
	private void UpdateInputs()
	{
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x2AC1500", Offset = "0x2ABFB00", VA = "0x182AC1500")]
	private void Update()
	{
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x2AC1CF0", Offset = "0x2AC02F0", VA = "0x182AC1CF0")]
	public FreeCamera()
	{
	}
}

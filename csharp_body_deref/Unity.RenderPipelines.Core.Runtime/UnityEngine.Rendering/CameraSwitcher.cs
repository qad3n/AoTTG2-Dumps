// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CameraSwitcher
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000061")]
public class CameraSwitcher : MonoBehaviour
{
	[Token(Token = "0x4000189")]
	[FieldOffset(Offset = "0x20")]
	public Camera[] m_Cameras;

	[Token(Token = "0x400018A")]
	[FieldOffset(Offset = "0x28")]
	private int m_CurrentCameraIndex;

	[Token(Token = "0x400018B")]
	[FieldOffset(Offset = "0x30")]
	private Camera m_OriginalCamera;

	[Token(Token = "0x400018C")]
	[FieldOffset(Offset = "0x38")]
	private Vector3 m_OriginalCameraPosition;

	[Token(Token = "0x400018D")]
	[FieldOffset(Offset = "0x44")]
	private Quaternion m_OriginalCameraRotation;

	[Token(Token = "0x400018E")]
	[FieldOffset(Offset = "0x58")]
	private Camera m_CurrentCamera;

	[Token(Token = "0x400018F")]
	[FieldOffset(Offset = "0x60")]
	private GUIContent[] m_CameraNames;

	[Token(Token = "0x4000190")]
	[FieldOffset(Offset = "0x68")]
	private int[] m_CameraIndices;

	[Token(Token = "0x4000191")]
	[FieldOffset(Offset = "0x70")]
	private DebugUI.EnumField m_DebugEntry;

	[Token(Token = "0x4000192")]
	[FieldOffset(Offset = "0x78")]
	private int m_DebugEntryEnumIndex;

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x4B947A0", Offset = "0x4B947A0", VA = "0x4B947A0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x4B95140", Offset = "0x4B95140", VA = "0x4B95140")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x4B94E70", Offset = "0x4B94E70", VA = "0x4B94E70")]
	private int GetCameraCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x4B951C0", Offset = "0x4B951C0", VA = "0x4B951C0")]
	private Camera GetNextCamera()
	{
		return null;
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x4B95200", Offset = "0x4B95200", VA = "0x4B95200")]
	private void SetCameraIndex(int index)
	{
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x4B95480", Offset = "0x4B95480", VA = "0x4B95480")]
	public CameraSwitcher()
	{
	}
}

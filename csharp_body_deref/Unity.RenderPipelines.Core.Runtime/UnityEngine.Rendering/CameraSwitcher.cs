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
	[Address(RVA = "0x486F6B0", Offset = "0x486F6B0", VA = "0x486F6B0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x4870050", Offset = "0x4870050", VA = "0x4870050")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x486FD80", Offset = "0x486FD80", VA = "0x486FD80")]
	private int GetCameraCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x48700D0", Offset = "0x48700D0", VA = "0x48700D0")]
	private Camera GetNextCamera()
	{
		return null;
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x4870110", Offset = "0x4870110", VA = "0x4870110")]
	private void SetCameraIndex(int index)
	{
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x4870390", Offset = "0x4870390", VA = "0x4870390")]
	public CameraSwitcher()
	{
	}
}

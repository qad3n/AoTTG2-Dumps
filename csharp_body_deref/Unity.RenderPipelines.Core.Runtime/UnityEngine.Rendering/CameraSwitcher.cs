// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CameraSwitcher
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200001B")]
public class CameraSwitcher : MonoBehaviour
{
	[Token(Token = "0x4000087")]
	[FieldOffset(Offset = "0x20")]
	public Camera[] m_Cameras;

	[Token(Token = "0x4000088")]
	[FieldOffset(Offset = "0x28")]
	private int m_CurrentCameraIndex;

	[Token(Token = "0x4000089")]
	[FieldOffset(Offset = "0x30")]
	private Camera m_OriginalCamera;

	[Token(Token = "0x400008A")]
	[FieldOffset(Offset = "0x38")]
	private Vector3 m_OriginalCameraPosition;

	[Token(Token = "0x400008B")]
	[FieldOffset(Offset = "0x44")]
	private Quaternion m_OriginalCameraRotation;

	[Token(Token = "0x400008C")]
	[FieldOffset(Offset = "0x58")]
	private Camera m_CurrentCamera;

	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0x60")]
	private GUIContent[] m_CameraNames;

	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x68")]
	private int[] m_CameraIndices;

	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x70")]
	private DebugUI.EnumField m_DebugEntry;

	[Token(Token = "0x4000090")]
	[FieldOffset(Offset = "0x78")]
	private int m_DebugEntryEnumIndex;

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x2ABA8F0", Offset = "0x2AB8EF0", VA = "0x182ABA8F0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x2ABA860", Offset = "0x2AB8E60", VA = "0x182ABA860")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x2ABA7F0", Offset = "0x2AB8DF0", VA = "0x182ABA7F0")]
	private int GetCameraCount()
	{
		return default(int);
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x2ABA810", Offset = "0x2AB8E10", VA = "0x182ABA810")]
	private Camera GetNextCamera()
	{
		return null;
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x2ABAF40", Offset = "0x2AB9540", VA = "0x182ABAF40")]
	private void SetCameraIndex(int index)
	{
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x229AFD0", Offset = "0x22995D0", VA = "0x18229AFD0")]
	public CameraSwitcher()
	{
	}
}

// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.TaaHistory
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000E0")]
public sealed class TaaHistory : CameraHistoryItem
{
	[Token(Token = "0x400052B")]
	[FieldOffset(Offset = "0x20")]
	private int[] m_TaaAccumulationTextureIds;

	[Token(Token = "0x400052C")]
	[FieldOffset(Offset = "0x28")]
	private int[] m_TaaAccumulationVersions;

	[Token(Token = "0x400052D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] m_TaaAccumulationNames;

	[Token(Token = "0x400052E")]
	[FieldOffset(Offset = "0x30")]
	private RenderTextureDescriptor m_Descriptor;

	[Token(Token = "0x400052F")]
	[FieldOffset(Offset = "0x68")]
	private Hash128 m_DescKey;

	[Token(Token = "0x600062A")]
	[Address(RVA = "0x6643A80", Offset = "0x6642A80", VA = "0x6643A80", Slot = "5")]
	public override void OnCreate(BufferedRTHandleSystem owner, uint typeId)
	{
	}

	[Token(Token = "0x600062B")]
	[Address(RVA = "0x6643AF0", Offset = "0x6642AF0", VA = "0x6643AF0", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x6643B90", Offset = "0x6642B90", VA = "0x6643B90")]
	public RTHandle GetAccumulationTexture(int eyeIndex = 0)
	{
		return null;
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x6643BC0", Offset = "0x6642BC0", VA = "0x6643BC0")]
	public int GetAccumulationVersion(int eyeIndex = 0)
	{
		return default(int);
	}

	[Token(Token = "0x600062E")]
	[Address(RVA = "0x6643BF0", Offset = "0x6642BF0", VA = "0x6643BF0")]
	internal void SetAccumulationVersion(int eyeIndex, int version)
	{
	}

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x6643C20", Offset = "0x6642C20", VA = "0x6643C20")]
	private bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x6000630")]
	[Address(RVA = "0x6643C50", Offset = "0x6642C50", VA = "0x6643C50")]
	private bool IsDirty(ref RenderTextureDescriptor desc)
	{
		return default(bool);
	}

	[Token(Token = "0x6000631")]
	[Address(RVA = "0x6643CB0", Offset = "0x6642CB0", VA = "0x6643CB0")]
	private void Alloc(ref RenderTextureDescriptor desc, bool xrMultipassEnabled)
	{
	}

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x6643E10", Offset = "0x6642E10", VA = "0x6643E10")]
	internal bool Update(ref RenderTextureDescriptor cameraDesc, bool xrMultipassEnabled = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000633")]
	[Address(RVA = "0x6643F70", Offset = "0x6642F70", VA = "0x6643F70")]
	public TaaHistory()
	{
	}
}

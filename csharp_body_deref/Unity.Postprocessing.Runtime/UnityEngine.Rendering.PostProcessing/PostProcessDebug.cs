// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.PostProcessDebug
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x200005C")]
[ExecuteAlways]
[AddComponentMenu("Rendering/Post-process Debug", 1002)]
public sealed class PostProcessDebug : MonoBehaviour
{
	[Token(Token = "0x4000161")]
	[FieldOffset(Offset = "0x20")]
	public PostProcessLayer postProcessLayer;

	[Token(Token = "0x4000162")]
	[FieldOffset(Offset = "0x28")]
	private PostProcessLayer m_PreviousPostProcessLayer;

	[Token(Token = "0x4000163")]
	[FieldOffset(Offset = "0x30")]
	public bool lightMeter;

	[Token(Token = "0x4000164")]
	[FieldOffset(Offset = "0x31")]
	public bool histogram;

	[Token(Token = "0x4000165")]
	[FieldOffset(Offset = "0x32")]
	public bool waveform;

	[Token(Token = "0x4000166")]
	[FieldOffset(Offset = "0x33")]
	public bool vectorscope;

	[Token(Token = "0x4000167")]
	[FieldOffset(Offset = "0x34")]
	public DebugOverlay debugOverlay;

	[Token(Token = "0x4000168")]
	[FieldOffset(Offset = "0x38")]
	private Camera m_CurrentCamera;

	[Token(Token = "0x4000169")]
	[FieldOffset(Offset = "0x40")]
	private CommandBuffer m_CmdAfterEverything;

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x4B4C3E0", Offset = "0x4B4C3E0", VA = "0x4B4C3E0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x4B4C470", Offset = "0x4B4C470", VA = "0x4B4C470")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x4B4C510", Offset = "0x4B4C510", VA = "0x4B4C510")]
	private void Update()
	{
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x4B4C870", Offset = "0x4B4C870", VA = "0x4B4C870")]
	private void Reset()
	{
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x4B4C520", Offset = "0x4B4C520", VA = "0x4B4C520")]
	private void UpdateStates()
	{
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x4B4C930", Offset = "0x4B4C930", VA = "0x4B4C930")]
	private void OnPostRender()
	{
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x4B4CA50", Offset = "0x4B4CA50", VA = "0x4B4CA50")]
	private void OnGUI()
	{
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x4B4CB50", Offset = "0x4B4CB50", VA = "0x4B4CB50")]
	private void DrawMonitor(ref Rect rect, Monitor monitor, bool enabled)
	{
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x4B4CCB0", Offset = "0x4B4CCB0", VA = "0x4B4CCB0")]
	public PostProcessDebug()
	{
	}
}

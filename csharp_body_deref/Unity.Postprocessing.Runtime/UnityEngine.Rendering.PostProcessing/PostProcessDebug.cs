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
	[Address(RVA = "0x48272F0", Offset = "0x48272F0", VA = "0x48272F0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x4827380", Offset = "0x4827380", VA = "0x4827380")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x4827420", Offset = "0x4827420", VA = "0x4827420")]
	private void Update()
	{
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x4827780", Offset = "0x4827780", VA = "0x4827780")]
	private void Reset()
	{
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x4827430", Offset = "0x4827430", VA = "0x4827430")]
	private void UpdateStates()
	{
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x4827840", Offset = "0x4827840", VA = "0x4827840")]
	private void OnPostRender()
	{
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x4827960", Offset = "0x4827960", VA = "0x4827960")]
	private void OnGUI()
	{
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x4827A60", Offset = "0x4827A60", VA = "0x4827A60")]
	private void DrawMonitor(ref Rect rect, Monitor monitor, bool enabled)
	{
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x4827BC0", Offset = "0x4827BC0", VA = "0x4827BC0")]
	public PostProcessDebug()
	{
	}
}

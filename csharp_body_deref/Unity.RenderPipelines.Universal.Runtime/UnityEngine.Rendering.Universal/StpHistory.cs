// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.StpHistory
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000DF")]
internal sealed class StpHistory : CameraHistoryItem
{
	[Token(Token = "0x400052A")]
	[FieldOffset(Offset = "0x20")]
	private STP.HistoryContext[] m_historyContexts;

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x66437E0", Offset = "0x66427E0", VA = "0x66437E0", Slot = "5")]
	public override void OnCreate(BufferedRTHandleSystem owner, uint typeId)
	{
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x66438B0", Offset = "0x66428B0", VA = "0x66438B0", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x6643900", Offset = "0x6642900", VA = "0x6643900")]
	internal STP.HistoryContext GetHistoryContext(int eyeIndex)
	{
		return null;
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x6643930", Offset = "0x6642930", VA = "0x6643930")]
	internal bool Update(UniversalCameraData cameraData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000629")]
	[Address(RVA = "0x6643A30", Offset = "0x6642A30", VA = "0x6643A30")]
	public StpHistory()
	{
	}
}

// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.StpHistory
// Update status: NEW in this game update
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
	[Address(RVA = "0x2C400B0", Offset = "0x2C3E6B0", VA = "0x182C400B0", Slot = "5")]
	public override void OnCreate(BufferedRTHandleSystem owner, uint typeId)
	{
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x2C40160", Offset = "0x2C3E760", VA = "0x182C40160", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x2C40080", Offset = "0x2C3E680", VA = "0x182C40080")]
	internal STP.HistoryContext GetHistoryContext(int eyeIndex)
	{
		return null;
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x2C401B0", Offset = "0x2C3E7B0", VA = "0x182C401B0")]
	internal bool Update(UniversalCameraData cameraData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000629")]
	[Address(RVA = "0x2C402C0", Offset = "0x2C3E8C0", VA = "0x182C402C0")]
	public StpHistory()
	{
	}
}

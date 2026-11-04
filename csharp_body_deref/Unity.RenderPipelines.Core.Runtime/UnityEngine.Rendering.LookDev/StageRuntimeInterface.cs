// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.LookDev.StageRuntimeInterface
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.LookDev;

[Token(Token = "0x20002CF")]
public class StageRuntimeInterface
{
	[Token(Token = "0x4000D1D")]
	[FieldOffset(Offset = "0x10")]
	private Func<bool, GameObject> m_AddGameObject;

	[Token(Token = "0x4000D1E")]
	[FieldOffset(Offset = "0x18")]
	private Func<Camera> m_GetCamera;

	[Token(Token = "0x4000D1F")]
	[FieldOffset(Offset = "0x20")]
	private Func<Light> m_GetSunLight;

	[Token(Token = "0x4000D20")]
	[FieldOffset(Offset = "0x28")]
	public object SRPData;

	[Token(Token = "0x1700026D")]
	public Camera camera
	{
		[Token(Token = "0x60013DF")]
		[Address(RVA = "0x2952A50", Offset = "0x2951050", VA = "0x182952A50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026E")]
	public Light sunLight
	{
		[Token(Token = "0x60013E0")]
		[Address(RVA = "0x18F79C0", Offset = "0x18F5FC0", VA = "0x1818F79C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60013DD")]
	[Address(RVA = "0xE56DE0", Offset = "0xE553E0", VA = "0x180E56DE0")]
	public StageRuntimeInterface(Func<bool, GameObject> AddGameObject, Func<Camera> GetCamera, Func<Light> GetSunLight)
	{
	}

	[Token(Token = "0x60013DE")]
	[Address(RVA = "0x221B0D0", Offset = "0x22196D0", VA = "0x18221B0D0")]
	public GameObject AddGameObject(bool persistent = false)
	{
		return null;
	}
}

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

[Token(Token = "0x2000210")]
public class StageRuntimeInterface
{
	[Token(Token = "0x400084B")]
	[FieldOffset(Offset = "0x10")]
	private Func<bool, GameObject> m_AddGameObject;

	[Token(Token = "0x400084C")]
	[FieldOffset(Offset = "0x18")]
	private Func<Camera> m_GetCamera;

	[Token(Token = "0x400084D")]
	[FieldOffset(Offset = "0x20")]
	private Func<Light> m_GetSunLight;

	[Token(Token = "0x400084E")]
	[FieldOffset(Offset = "0x28")]
	public object SRPData;

	[Token(Token = "0x170001AF")]
	public Camera camera
	{
		[Token(Token = "0x6000E47")]
		[Address(RVA = "0x4C0E100", Offset = "0x4C0E100", VA = "0x4C0E100")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B0")]
	public Light sunLight
	{
		[Token(Token = "0x6000E48")]
		[Address(RVA = "0x4C0E120", Offset = "0x4C0E120", VA = "0x4C0E120")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E45")]
	[Address(RVA = "0x4C0E080", Offset = "0x4C0E080", VA = "0x4C0E080")]
	public StageRuntimeInterface(Func<bool, GameObject> AddGameObject, Func<Camera> GetCamera, Func<Light> GetSunLight)
	{
	}

	[Token(Token = "0x6000E46")]
	[Address(RVA = "0x4C0E0E0", Offset = "0x4C0E0E0", VA = "0x4C0E0E0")]
	public GameObject AddGameObject(bool persistent = false)
	{
		return null;
	}
}

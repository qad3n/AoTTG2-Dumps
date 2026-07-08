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
		[Address(RVA = "0x48E9090", Offset = "0x48E9090", VA = "0x48E9090")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B0")]
	public Light sunLight
	{
		[Token(Token = "0x6000E48")]
		[Address(RVA = "0x48E90B0", Offset = "0x48E90B0", VA = "0x48E90B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E45")]
	[Address(RVA = "0x48E9010", Offset = "0x48E9010", VA = "0x48E9010")]
	public StageRuntimeInterface(Func<bool, GameObject> AddGameObject, Func<Camera> GetCamera, Func<Light> GetSunLight)
	{
	}

	[Token(Token = "0x6000E46")]
	[Address(RVA = "0x48E9070", Offset = "0x48E9070", VA = "0x48E9070")]
	public GameObject AddGameObject(bool persistent = false)
	{
		return null;
	}
}

// ==================== AoTTG2 cross-reference ====================
// Type: UnityStandardAssets.ImageEffects.ImageEffectBase
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UnityStandardAssets/ImageEffects/ImageEffectBase.c
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/ImageEffectBase.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x2000025")]
[RequireComponent(typeof(Camera))]
[AddComponentMenu("")]
public class ImageEffectBase : MonoBehaviour
{
	[Token(Token = "0x4000121")]
	[FieldOffset(Offset = "0x20")]
	public Shader shader;

	[Token(Token = "0x4000122")]
	[FieldOffset(Offset = "0x28")]
	private Material m_Material;

	[Token(Token = "0x17000006")]
	protected Material material
	{
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x44807D0", Offset = "0x44807D0", VA = "0x44807D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x4482D30", Offset = "0x4482D30", VA = "0x4482D30", Slot = "4")]
	protected virtual void Start()
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x4482DC0", Offset = "0x4482DC0", VA = "0x4482DC0", Slot = "5")]
	protected virtual void OnDisable()
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x44808B0", Offset = "0x44808B0", VA = "0x44808B0")]
	public ImageEffectBase()
	{
	}
}

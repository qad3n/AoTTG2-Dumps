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
		[Address(RVA = "0x415B6D0", Offset = "0x415B6D0", VA = "0x415B6D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x415DC30", Offset = "0x415DC30", VA = "0x415DC30", Slot = "4")]
	protected virtual void Start()
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x415DCC0", Offset = "0x415DCC0", VA = "0x415DCC0", Slot = "5")]
	protected virtual void OnDisable()
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x415B7B0", Offset = "0x415B7B0", VA = "0x415B7B0")]
	public ImageEffectBase()
	{
	}
}

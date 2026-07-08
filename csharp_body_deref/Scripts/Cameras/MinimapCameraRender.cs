using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace Cameras;

[Token(Token = "0x20006BE")]
internal class MinimapCameraRender : MonoBehaviour
{
	[Token(Token = "0x40020C1")]
	[FieldOffset(Offset = "0x20")]
	private List<MapLight> _disabledLights;

	[Token(Token = "0x40020C2")]
	[FieldOffset(Offset = "0x28")]
	private Color _ambientLight;

	[Token(Token = "0x40020C3")]
	[FieldOffset(Offset = "0x38")]
	private float _ambientIntensity;

	[Token(Token = "0x40020C4")]
	[FieldOffset(Offset = "0x3C")]
	private bool _fog;

	[Token(Token = "0x6004348")]
	[Address(RVA = "0x404BD70", Offset = "0x404BD70", VA = "0x404BD70")]
	private void OnPreCull()
	{
	}

	[Token(Token = "0x6004349")]
	[Address(RVA = "0x404C040", Offset = "0x404C040", VA = "0x404C040")]
	private void OnPostRender()
	{
	}

	[Token(Token = "0x600434A")]
	[Address(RVA = "0x404C1C0", Offset = "0x404C1C0", VA = "0x404C1C0")]
	public MinimapCameraRender()
	{
	}
}

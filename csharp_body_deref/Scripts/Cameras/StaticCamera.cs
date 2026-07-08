using Il2CppDummyDll;

namespace Cameras;

[Token(Token = "0x20006BF")]
internal class StaticCamera : BaseCamera
{
	[Token(Token = "0x600434B")]
	[Address(RVA = "0x404C240", Offset = "0x404C240", VA = "0x404C240", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600434C")]
	[Address(RVA = "0x404C270", Offset = "0x404C270", VA = "0x404C270")]
	public void SetSkybox(bool skybox)
	{
	}

	[Token(Token = "0x600434D")]
	[Address(RVA = "0x404C2A0", Offset = "0x404C2A0", VA = "0x404C2A0")]
	public StaticCamera()
	{
	}
}

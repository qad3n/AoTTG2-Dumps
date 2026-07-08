using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000087")]
public interface IGraphNester : IGraphParent
{
	[Token(Token = "0x170000F2")]
	IGraphNest nest
	{
		[Token(Token = "0x60003EF")]
		get;
	}

	[Token(Token = "0x60003F0")]
	void InstantiateNest();

	[Token(Token = "0x60003F1")]
	void UninstantiateNest();
}

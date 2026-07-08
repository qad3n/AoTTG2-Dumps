using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.LookDev;

[Token(Token = "0x200020E")]
public interface IDataProvider
{
	[Token(Token = "0x170001AE")]
	IEnumerable<string> supportedDebugModes
	{
		[Token(Token = "0x6000E3F")]
		get;
	}

	[Token(Token = "0x6000E3D")]
	void FirstInitScene(StageRuntimeInterface stage);

	[Token(Token = "0x6000E3E")]
	void UpdateSky(Camera camera, Sky sky, StageRuntimeInterface stage);

	[Token(Token = "0x6000E40")]
	void UpdateDebugMode(int debugIndex);

	[Token(Token = "0x6000E41")]
	void GetShadowMask(ref RenderTexture output, StageRuntimeInterface stage);

	[Token(Token = "0x6000E42")]
	void OnBeginRendering(StageRuntimeInterface stage);

	[Token(Token = "0x6000E43")]
	void OnEndRendering(StageRuntimeInterface stage);

	[Token(Token = "0x6000E44")]
	void Cleanup(StageRuntimeInterface SRI);
}

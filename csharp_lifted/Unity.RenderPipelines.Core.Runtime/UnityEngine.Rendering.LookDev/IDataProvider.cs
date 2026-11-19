// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.LookDev.IDataProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.LookDev;

[Token(Token = "0x20002CD")]
public interface IDataProvider
{
	[Token(Token = "0x1700026C")]
	IEnumerable<string> supportedDebugModes
	{
		[Token(Token = "0x60013D7")]
		get;
	}

	[Token(Token = "0x60013D5")]
	void FirstInitScene(StageRuntimeInterface stage);

	[Token(Token = "0x60013D6")]
	void UpdateSky(Camera camera, Sky sky, StageRuntimeInterface stage);

	[Token(Token = "0x60013D8")]
	void UpdateDebugMode(int debugIndex);

	[Token(Token = "0x60013D9")]
	void GetShadowMask(ref RenderTexture output, StageRuntimeInterface stage);

	[Token(Token = "0x60013DA")]
	void OnBeginRendering(StageRuntimeInterface stage);

	[Token(Token = "0x60013DB")]
	void OnEndRendering(StageRuntimeInterface stage);

	[Token(Token = "0x60013DC")]
	void Cleanup(StageRuntimeInterface SRI);
}

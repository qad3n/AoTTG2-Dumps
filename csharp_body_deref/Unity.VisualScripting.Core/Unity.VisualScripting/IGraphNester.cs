// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.IGraphNester
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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

// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SceneManagement.SceneManagerAPI
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.SceneManagement;

[Token(Token = "0x20001FD")]
public class SceneManagerAPI
{
	[Token(Token = "0x40006AC")]
	[FieldOffset(Offset = "0x0")]
	private static SceneManagerAPI s_DefaultAPI;

	[Token(Token = "0x17000255")]
	internal static SceneManagerAPI ActiveAPI
	{
		[Token(Token = "0x6000DAB")]
		[Address(RVA = "0x4E14360", Offset = "0x4E14360", VA = "0x4E14360")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000256")]
	public static SceneManagerAPI overrideAPI
	{
		[Token(Token = "0x6000DAC")]
		[Address(RVA = "0x4E14440", Offset = "0x4E14440", VA = "0x4E14440")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000DAD")]
	[Address(RVA = "0x4E144B0", Offset = "0x4E144B0", VA = "0x4E144B0")]
	protected internal SceneManagerAPI()
	{
	}

	[Token(Token = "0x6000DAE")]
	[Address(RVA = "0x4E144C0", Offset = "0x4E144C0", VA = "0x4E144C0", Slot = "4")]
	protected internal virtual AsyncOperation LoadSceneAsyncByNameOrIndex(string sceneName, int sceneBuildIndex, LoadSceneParameters parameters, bool mustCompleteNextFrame)
	{
		return null;
	}

	[Token(Token = "0x6000DAF")]
	[Address(RVA = "0x4E14510", Offset = "0x4E14510", VA = "0x4E14510", Slot = "5")]
	protected internal virtual AsyncOperation LoadFirstScene(bool mustLoadAsync)
	{
		return null;
	}
}

// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.SceneVariables
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Unity.VisualScripting;

[Token(Token = "0x20001D1")]
[Singleton(Name = "VisualScripting SceneVariables", Automatic = true, Persistent = false)]
[RequireComponent(typeof(Variables))]
[DisableAnnotation]
[AddComponentMenu("")]
[IncludeInSettings(false)]
public sealed class SceneVariables : MonoBehaviour, ISingleton
{
	[Token(Token = "0x4000945")]
	[FieldOffset(Offset = "0x20")]
	private Variables _variables;

	[Token(Token = "0x170001E7")]
	public Variables variables
	{
		[Token(Token = "0x6001117")]
		[Address(RVA = "0x4D66780", Offset = "0x4D66780", VA = "0x4D66780")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001112")]
	[Address(RVA = "0x4D665A0", Offset = "0x4D665A0", VA = "0x4D665A0")]
	public static SceneVariables Instance(Scene scene)
	{
		return null;
	}

	[Token(Token = "0x6001113")]
	[Address(RVA = "0x4D66600", Offset = "0x4D66600", VA = "0x4D66600")]
	public static bool InstantiatedIn(Scene scene)
	{
		return default(bool);
	}

	[Token(Token = "0x6001114")]
	[Address(RVA = "0x4D66660", Offset = "0x4D66660", VA = "0x4D66660")]
	public static VariableDeclarations For(Scene? scene)
	{
		return null;
	}

	[Token(Token = "0x6001115")]
	[Address(RVA = "0x4D66820", Offset = "0x4D66820", VA = "0x4D66820")]
	private void Awake()
	{
	}

	[Token(Token = "0x6001116")]
	[Address(RVA = "0x4D66880", Offset = "0x4D66880", VA = "0x4D66880")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6001118")]
	[Address(RVA = "0x4D668E0", Offset = "0x4D668E0", VA = "0x4D668E0")]
	public SceneVariables()
	{
	}
}

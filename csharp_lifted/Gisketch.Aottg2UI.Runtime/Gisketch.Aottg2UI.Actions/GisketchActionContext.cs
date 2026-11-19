// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchActionContext
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchActionContext.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x2000101")]
public readonly struct GisketchActionContext
{
	[Token(Token = "0x4000517")]
	[FieldOffset(Offset = "0x0")]
	public readonly string ElementId;

	[Token(Token = "0x4000518")]
	[FieldOffset(Offset = "0x8")]
	public readonly GameObject GameObject;

	[Token(Token = "0x4000519")]
	[FieldOffset(Offset = "0x10")]
	public readonly GisketchNodeDefinition Node;

	[Token(Token = "0x400051A")]
	[FieldOffset(Offset = "0x18")]
	public readonly GisketchActionInputSource InputSource;

	[Token(Token = "0x170000BD")]
	public string InputText
	{
		[Token(Token = "0x60007C3")]
		[Address(RVA = "0x52AB3D0", Offset = "0x52AA3D0", VA = "0x52AB3D0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchActionContext.c (Gisketch.Aottg2UI.Actions.GisketchActionContext$$get_InputText): 3 lines keep C-only constructs
			Object x;
			GameObject __this_00;
			GisketchNodeDefinition pGVar1;
			String pSVar2;
			bool bVar3;
			TMP_InputField x_00;
			String* ppSVar4;

			if (Il2CppMethodInitialized_07542c0e == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField) ;
				Il2CppMethodInitialized_07542c0e = true;
			}
			x = (Object)this.GameObject;
			x_00 = null;
			bVar3 = (x != null);
			if (bVar3) {
				__this_00 = this.GameObject;
				if (__this_00 == null) goto label_053ab4b3;
				x_00 = __this_00.GetComponent<TMP_InputField>();
			}
			bVar3 = ((Object)x_00 != null);
			if (bVar3) {
				if (x_00 == null) {
		label_053ab4b3: ;
					throw new NullReferenceException();
				}
				ppSVar4 = &x_00.m_Text;
			}
			else {
				pGVar1 = this.Node;
				if ((pGVar1 != null) &&(pSVar2 = pGVar1.value, pSVar2 != null)) {
					return pSVar2;
				}
				ppSVar4 = *(String**)(g_data_07556758 + 0xb8);
			}
			return *ppSVar4;
		}
	}

	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x52AB330", Offset = "0x52AA330", VA = "0x52AB330")]
	public GisketchActionContext(string elementId, GameObject gameObject, GisketchNodeDefinition node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchActionContext.c (Gisketch.Aottg2UI.Actions.GisketchActionContext$$.ctor): clean
		this.ElementId = elementId;
		this.GameObject = gameObject;
		this.Node = node;
		this.InputSource = 0;
		return;
	}

	[Token(Token = "0x60007C2")]
	[Address(RVA = "0x52AB380", Offset = "0x52AA380", VA = "0x52AB380")]
	public GisketchActionContext(string elementId, GameObject gameObject, GisketchNodeDefinition node, GisketchActionInputSource inputSource)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchActionContext.c (Gisketch.Aottg2UI.Actions.GisketchActionContext$$.ctor): clean
		this.ElementId = elementId;
		this.GameObject = gameObject;
		this.Node = node;
		this.InputSource = inputSource;
		return;
	}
}

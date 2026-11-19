// ==================== AoTTG2 cross-reference ====================
// Type: Utility.GUICallback
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Utility/GUICallback.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x200092E")]
internal class GUICallback : MonoBehaviour
{
	[Token(Token = "0x4002E38")]
	[FieldOffset(Offset = "0x20")]
	private Action _draw;

	[Token(Token = "0x60056A2")]
	[Address(RVA = "0x5CEF4B0", Offset = "0x5CEE4B0", VA = "0x5CEF4B0")]
	public static GUICallback Create(GameObject owner, Action draw)
	{
		// Lifted from source/cpp/Utility/GUICallback.c (Utility.GUICallback$$Create): clean
		GUICallback __this;

		if (owner != null) {
			__this = owner.AddComponent<GUICallback>();
			if (__this != null) {
				__this._draw = draw;
				__this.enabled = false;
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60056A3")]
	[Address(RVA = "0x5CEF530", Offset = "0x5CEE530", VA = "0x5CEF530")]
	private void OnGUI()
	{
		// Lifted from source/cpp/Utility/GUICallback.c (Utility.GUICallback$$OnGUI): 2 lines keep C-only constructs
		Action pSVar1;
		code *vtableDispatch;
		ulong in_RDX;

		pSVar1 = this._draw;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,pSVar1.method,in_RDX,vtableDispatch);
		return;
	}

	[Token(Token = "0x60056A4")]
	[Address(RVA = "0x5CEF550", Offset = "0x5CEE550", VA = "0x5CEF550")]
	public GUICallback()
	{
		// Lifted from source/cpp/Utility/GUICallback.c (Utility.GUICallback$$.ctor): clean
		base();
		return;
	}
}

// ==================== AoTTG2 cross-reference ====================
// Type: Cameras.MinimapCameraRender
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Cameras/MinimapCameraRender.c
// Prior real C# source (older reference): Assets/Scripts/Cameras/MinimapCamera.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace Cameras;

[Token(Token = "0x20008F5")]
internal class MinimapCameraRender : MonoBehaviour
{
	[Token(Token = "0x4002D83")]
	[FieldOffset(Offset = "0x20")]
	private List<MapLight> _disabledLights;

	[Token(Token = "0x4002D84")]
	[FieldOffset(Offset = "0x28")]
	private Color _ambientLight;

	[Token(Token = "0x4002D85")]
	[FieldOffset(Offset = "0x38")]
	private float _ambientIntensity;

	[Token(Token = "0x4002D86")]
	[FieldOffset(Offset = "0x3C")]
	private bool _fog;

	[Token(Token = "0x6005543")]
	[Address(RVA = "0x5CD8B50", Offset = "0x5CD7B50", VA = "0x5CD8B50")]
	public void BeginRender()
	{
		// Lifted from source/cpp/Cameras/MinimapCameraRender.c (Cameras.MinimapCameraRender$$BeginRender): 10 lines keep C-only constructs
		int piVar1;
		int length;
		uint uVar2;
		List<MapLight> pSVar3;
		MapLight[] pMVar4;
		object item;
		bool bVar6;
		float fVar7;
		Color UVar8;
		Color value;
		byte[] local_60 = new byte[16];
		MapLight local_50;
		System_Collections_Generic_List_Enumerator_object__o local_48;

		pSVar3 = this._disabledLights;
		if (pSVar3 != null) {
			piVar1 = &pSVar3._version;
			*piVar1 = *piVar1 + 1;
			length = pSVar3._size;
			pSVar3._size = 0;
			if (0 < length) {
				Array.Clear((Array)pSVar3._items, 0, length);
			}
			pSVar3 = MapLoader.MapLights;
			if (pSVar3 != null) {
				local_60.GetEnumerator((List<object>)pSVar3);
				local_48._current = (object)local_50;
				local_48._list = (List<T>)local_60._0_8_;
				local_48._index = local_60._8_4_;
				local_48._version = local_60._12_4_;
				local_60._0_8_ = null;
				local_60._8_8_ = &local_48;
				while(true) {
					do {
						bVar6 = local_48.MoveNext();
						item = local_48._current;
						if (!bVar6) {
							local_48.Dispose();
							UVar8 = (Color)RenderSettings.ambientLight;
							this._ambientLight = UVar8;
							fVar7 = RenderSettings.ambientIntensity;
							this._ambientIntensity = fVar7;
							bVar6 = RenderSettings.fog;
							this._fog = bVar6;
							value.b = 1.0;
							value.a = 1.0;
							value.r = 1.0;
							value.g = 1.0;
							RenderSettings.ambientLight = value;
							RenderSettings.ambientIntensity = 1.0;
							RenderSettings.fog = false;
							return;
						}
						if ((MapLight)local_48._current == null) {
							throw new NullReferenceException();
						}
						bVar6 = local_48._current.MinimapDisableLight();
					} while (!bVar6);
					pSVar3 = this._disabledLights;
					if (pSVar3 == null) break;
					piVar1 = &pSVar3._version;
					*piVar1 = *piVar1 + 1;
					pMVar4 = pSVar3._items;
					if (pMVar4 == null) break;
					uVar2 = pSVar3._size;
					if (uVar2 < (uint)pMVar4.Length) {
						pSVar3._size = uVar2 + 1;
						pMVar4[(int)uVar2] = (MapLight)item;
					}
					else {
						pSVar3.AddWithResize(item);
					}
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005544")]
	[Address(RVA = "0x5CD91E0", Offset = "0x5CD81E0", VA = "0x5CD91E0")]
	public void EndRender()
	{
		// Lifted from source/cpp/Cameras/MinimapCameraRender.c (Cameras.MinimapCameraRender$$EndRender): 2 lines keep C-only constructs
		List<MapLight> __this_00;
		bool bVar1;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		byte local_20;

		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		__this_00 = this._disabledLights;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_48 = __this_00.GetEnumerator();
		local_20 = (byte)&local_48;
		while(true) {
			bVar1 = local_48.MoveNext();
			if (!bVar1) break;
			if ((MapLight)local_48._current != null) {
				local_48._current.MinimapEnableLight();
			}
		}
		local_48.Dispose();
		RenderSettings.ambientLight = (Color)this._ambientLight;
		RenderSettings.ambientIntensity = this._ambientIntensity;
		RenderSettings.fog = this._fog;
		return;
	}

	[Token(Token = "0x6005545")]
	[Address(RVA = "0x5CD9350", Offset = "0x5CD8350", VA = "0x5CD9350")]
	public MinimapCameraRender()
	{
		// Lifted from source/cpp/Cameras/MinimapCameraRender.c (Cameras.MinimapCameraRender$$.ctor): clean
		List<MapLight> __this_00;

		__this_00 = new List<MapLight>();
		this._disabledLights = __this_00;
		base();
		return;
	}
}

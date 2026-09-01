# DreamScape

1인칭 백룸 드림코어 3D 공포 게임입니다.


## 프로젝트 개요

- 장르: 3D 공포
- 개발 기간: 2025.05.01 ~ 2025.11.20
- 개발 인원: 6명
- 사용 엔진: Unreal5
- 사용 언어: Blueprint, C++
- 출시 플랫폼: 
- 담당 역할: 클라이언트 개발자(2명)/레벨 담당(2명)/아트 담당(2명)

## 대표 이미지 & 플레이 영상
<p align="center">
  <img src="Images/poster2.jpg" width="25%">

  <a href="https://youtu.be/E6Rys5QUZvI?si=ZuUGutQmCuku4-Zm">
    <img src="https://img.youtube.com/vi/E6Rys5QUZvI/0.jpg" width="50%">
  </a>
</p>

## 게임 설명
회사에서 업무 중 갑자기 의식을 잃은 주인공은 눈을 떠보니 어린 시절 놀던 놀이터와 박물관 등 환상의 공간에
갇혀 있다. 현실과 기억이 뒤섞인 공간에서 기묘한 퍼즐을 풀고 미지의 존재들의 추격을 뿌리치며, 탈출의 단서를 찾아낸다. 


플레이어는 맵에서 주어지는 최소한의 정보(연출, 사운드)만을 바탕으로 각 맵의 미션을 클리어하며
최종 목적지에 도달해야 합니다. 

## 주요 기능

- 적 자동 생성 및 순찰, 추격, 공격
- 게임 오버 카메라 뷰 처리, 시퀀스 설정
- 게임 오버 후 재시작
- 기본 UI, 사운드, 이펙트 적용

## 조작법

- 이동: 방향키 또는 WASD


## 개발 과정

- Scrum 방법론을 적용해 1-2주씩 sprint를 뛰며 진행 상황을 점검함.
- Github Desktop, Discord, Notion을 통해 개발 상황을 공유하고 소통함.
- 아트/ 디자인
<p align="center">
  <img src="Images/image.png" width="25%">
  <img src="Images/KakaoTalk_20250804_200638848.jpg" width="25%">
  <img src="Images/KakaoTalk_20251117_225626244.jpg" width="25%">
</p>
  
- 모델링 & 리깅 & 애님 제작
<p align="center">
  <img src="Images/KakaoTalk_20251112_221556813_02.jpg" width="25%">
  <img src="Images/KakaoTalk_20251112_221556813.png" width="25%">
  <img src="Images/애님제작 - Clipchamp로 제작.gif" width="25%">
</p>

- 맵 디자인
<p align="center">
  <img src="Images/KakaoTalk_20251112_222520645_01.png" width="25%">
  <img src="Images/KakaoTalk_20251112_222520645_05.png" width="25%">
</p>

- 플레이어 컨트롤
<table>
  <tr>
    <td align="center" width="50%">
      <img src="Images/캐릭터움직임버그 - Clipchamp로 제작.gif" width="100%"><br>
      <sub>1인칭 시점 플레이어 움직임 버그 수정 전</sub>
    </td>
    <td align="center" width="50%">
      <img src="Images/캐릭터움직임버그수정 - Clipchamp로 제작.gif" width="100%">
      <sub>1인칭 시점 플레이어 움직임 개선 후</sub>
    </td>
  </tr>
</table>

- 적 AI & 게임시스템
<p align="center">
  <img src="Images/조명과 연동 & Restart 구현(전) - Clipchamp로 제작.gif" width="40%"><br>
  <sub>추적 조명과 연동/ Restart 구현(수정 전)</sub>
</p>

<table>
  <tr>
    <td align="center" width="50%">
      <img src="Images/과토_재시작 로직.gif" width="100%"><br>
      <sub>Restart 자동 재시작 구현(수정 후)</sub>
    </td>
    <td align="center" width="50%">
      <img src="Images/Restart재구현2 - Clipchamp로 제작.gif" width="100%">
      <sub>Restart 자동 재시작 구현(수정 후)</sub>
    </td>
  </tr>
</table>

<p align="center">
  <img src="Images/무작위탐색 - Clipchamp로 제작.gif" width="40%"><br>
  <sub>맵 곳곳에 배치된 BP_Target을 무작위 순찰하는 적 AI</sub>
</p>

- 사운드 및 연출
<p align="center">
  <img src="Images/wwise.jpg" width="40%">
</p>
적의 접근을 거리에 따라 커지는 발자국 소리로 연출함. & wwise 엔진으로 실감나는 Ambient 사운드 제공.

<table>
  <tr>
    <td align="center" width="50%">
      <img src="Images/시작시연출 - Clipchamp로 제작.gif" width="100%"><br>
      <sub>카메라 연출</sub>
    </td>
    <td align="center" width="50%">
      <img src="Images/맨홀연출 - Clipchamp로 제작.gif" width="100%">
      <sub>시퀀스 적용</sub>
    </td>
  </tr>
</table>
